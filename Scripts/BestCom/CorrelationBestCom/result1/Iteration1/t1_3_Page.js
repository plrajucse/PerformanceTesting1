﻿ScriptStart(PageLoadProcessing);var browserData=null;var topWindow=null;var argument=null;var isDialog=false;var isModalDialog=false;var isModelessDialog=false;var parentWindow=null;var openModelessDialogs=Array();var activeModalDialog=null;var processUnloadEvents=false;var dirtyFlag=false;var supressUnloadProcessing=false;function PageLoadProcessing(){if(typeof(window.dialogArguments)!="undefined"){isDialog=true;if(window.dialogArguments==null||typeof(window.dialogArguments)!="object"){argument=window.dialogArguments}else{if(typeof(window.dialogArguments.argument)!="undefined"&&window.dialogArguments.argument!=null){argument=window.dialogArguments.argument}else if(typeof(window.dialogArguments.modal)=="undefined"&&typeof(window.dialogArguments.parent)=="undefined"){argument=window.dialogArguments}if(typeof(window.dialogArguments.modal)!="undefined"){if(window.dialogArguments.modal){isModalDialog=true;isModelessDialog=false}else{isModalDialog=false;isModelessDialog=true}}if(typeof(window.dialogArguments.parent)!="undefined"){parentWindow=window.dialogArguments.parent;browserData=parentWindow.browserData;if(isModalDialog){parentWindow.activeModalDialog=window}topWindow=parentWindow.topWindow}}if(browserData==null){browserData=new Object();browserData.session=new Object();browserData.session.settings=new Object()}window.onload=LoadProcessing;window.onunload=UnloadProcessing;window.onbeforeunload=BeforeUnloadProcessing;return}if(typeof(window.top._browserData)=="undefined"){window.top.location.replace(appUrl+"/Common/MainFrameset.aspx#"+window.location.href);return}topWindow=window.top;browserData=topWindow._browserData;if(typeof(browserData.session)=="undefined"){if(typeof(window.top.opener)!="undefined"&&window.top.opener!=null&&typeof(window.top.opener.browserData)!="undefined"&&window.top.opener.browserData!=null&&typeof(window.top.opener.browserData.session)!="undefined"){browserData.session=CloneObject(window.top.opener.browserData.session)}else{browserData.session=CloneObject(new Object())}}window.onload=LoadProcessing;window.onunload=UnloadProcessing;window.onbeforeunload=BeforeUnloadProcessing;window.top.document.title=document.title;window.focus()}function LoadProcessing(){if(typeof(__errMsg)!="undefined"){alert(__errMsg)}if(typeof(document.forms[0].__DirtyFlag)!="undefined"){if(document.forms[0].__DirtyFlag.value=="Y"){SetDirty()}else{ClearDirty()}}if(typeof(OnPageLoad)=="function"){OnPageLoad()}}function OnBeforeSubmit(){supressUnloadProcessing=true;if(typeof(document.forms[0].__DirtyFlag)!="undefined"){if(dirtyFlag){document.forms[0].__DirtyFlag.value="Y"}else{document.forms[0].__DirtyFlag.value="N"}}}function BeforeUnloadProcessing(){if(supressUnloadProcessing){supressUnloadProcessing=false;return}var currCtrl=document.activeElement;if(typeof(currCtrl)=="object"&&currCtrl!=null){currCtrl.blur();currCtrl.focus()}if(!processUnloadEvents){if(typeof(OnBeforePageUnload)=="function"){var retVal=OnBeforePageUnload();if(typeof(retVal)=="string"){event.returnValue=retVal}}else{var retVal=CheckDirty();if(typeof(retVal)=="string"){event.returnValue=retVal}}}}function UnloadProcessing(){if(!processUnloadEvents){ProcessDialogUnload(2);if(typeof(OnPageUnload)=="function"){OnPageUnload(1)}}CloseDialogWindowsWithoutEvents()}function ProcessDialogUnload(closeNesting){if(activeModalDialog!=null&&!activeModalDialog.closed){activeModalDialog.ProcessDialogUnload(closeNesting+1);activeModalDialog.CallOnPageUnload(closeNesting)}for(var i=openModelessDialogs.length-1;i>=0;i--){if(openModelessDialogs[i]!=null&&!openModelessDialogs[i].closed){openModelessDialogs[i].ProcessDialogUnload(closeNesting+1);openModelessDialogs[i].CallOnPageUnload(closeNesting)}}}function CallOnPageUnload(closeNesting){if(typeof(OnPageUnload)=="function"){OnPageUnload(closeNesting)}}function CloseDialogWindowsWithoutEvents(){if(activeModalDialog!=null&&!activeModalDialog.closed){activeModalDialog.CloseDialogWindowsWithoutEvents();activeModalDialog.processUnloadEvents=true;activeModalDialog.close()}for(var i=openModelessDialogs.length-1;i>=0;i--){if(openModelessDialogs[i]!=null&&!openModelessDialogs[i].closed){openModelessDialogs[i].CloseDialogWindowsWithoutEvents();openModelessDialogs[i].processUnloadEvents=true;openModelessDialogs[i].close()}}}function NavigateToUrl(url,dontPrefixUrl){var fullUrl;if(typeof(dontPrefixUrl)!="undefined"&&dontPrefixUrl){fullUrl=url}else{fullUrl=appUrl+"/"+url}CloseDialogWindowsWithoutEvents();processUnloadEvents=true;window.navigate(fullUrl)}function OpenWindow(url,features){}function ShowModalDialog(url,argument,features){var fullUrl=appUrl+"/"+url;var arg=new Object();arg.modal=true;arg.parent=window;if(typeof(argument)!="undefined"){arg.argument=argument}var retVal;if(typeof(features)=="undefined"){retVal=window.showModalDialog(fullUrl,arg)}else{retVal=window.showModalDialog(fullUrl,arg,features)}activeModalDialog=null;return retVal}function ShowModelessDialog(url,argument,features){var fullUrl=appUrl+"/"+url;var arg=new Object();arg.modal=false;arg.parent=window;if(typeof(argument)!="undefined"){arg.argument=argument}var wnd;if(typeof(features)=="undefined"){wnd=window.showModelessDialog(fullUrl,arg)}else{wnd=window.showModelessDialog(fullUrl,arg,features)}var freeSlot=0;for(var i=openModelessDialogs.length-1;i>=0;i--){if(openModelessDialogs[i]!=null&&!openModelessDialogs[i].closed){freeSlot=i+1;break}else{openModelessDialogs[i]=null}}openModelessDialogs[freeSlot]=wnd;return wnd}function CloseDialogWindows(doUnloadProcessing){if(doUnloadProcessing){ProcessDialogUnload(1)}CloseDialogWindowsWithoutEvents()}function CloseModelessDialog(wnd,doUnloadProcessing){if(wnd.closed||!wnd.isDialog||!wnd.isModelessDialog){return}if(doUnloadProcessing){wnd.ProcessDialogUnload(2);wnd.CallOnPageUnload(1)}wnd.CloseDialogWindowsWithoutEvents();wnd.processUnloadEvents=true;wnd.close()}function CloseMe(doUnloadProcessing){if(!isDialog){return}if(doUnloadProcessing){ProcessDialogUnload(2);CallOnPageUnload(1)}CloseDialogWindowsWithoutEvents();processUnloadEvents=true;window.close()}function GetDirty(option){if(typeof(option)!="undefined"){if(option=="parent"){return parentWindow.GetDirty()}if(dirtyFlag){return true}if(option=="either"){return parentWindow.GetDirty()}return false}else{return dirtyFlag}}function CheckDirty(option,message){if(GetDirty(option)){if(typeof(message)=="string"){return message}return GetAppMessage("DirtyWarning")}return}function SetDirty(){var dirtyChanged=false;if(!dirtyFlag){dirtyChanged=true}dirtyFlag=true;if(dirtyChanged){if(typeof(OnSetDirty)=="function"){OnSetDirty()}}}function ClearDirty(){var dirtyChanged=false;if(dirtyFlag){dirtyChanged=true}dirtyFlag=false;if(dirtyChanged){if(typeof(OnClearDirty)=="function"){OnClearDirty()}}}function SetParentDirty(){parentWindow.SetDirty()}function ClearParentDirty(){parentWindow.ClearDirty()}function GotoLoginPage(reason){if(topWindow!=null){topWindow.GotoLogin(reason)}}