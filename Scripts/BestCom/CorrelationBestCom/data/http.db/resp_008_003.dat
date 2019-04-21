function fnCancelClick() {
    if (window.confirm("You will be redirected to an external web site for the content requested. \n Would you like to Continue?")) {
        return true
    } else {
        return false
    }
}
function ReplacePrefixZero(sText) {}
function ShowErrorMessage(errorText) {
    try {
        var masterPageErrorControlId = document.getElementById("ErrorLabelId");
        if (masterPageErrorControlId != null) {
            var errorLabelId = document.getElementById(masterPageErrorControlId.value);
            if (errorLabelId != null) {
                errorLabelId.innerHTML = errorText
            }
        }
    } catch (e) {}
    return false
}
function ValidateNumericBox(Source, Destination, maxlength) {
    var isReturn = false;
    isReturn = RestrictNumericOnly(event);
    if (isReturn == true) {
        SetFocus(Source, Destination, maxlength)
    } else {
        return isReturn
    }
    return isReturn
}
function SetFocus(Source, Destination, maxlength) {
    var source = document.getElementById(Source);
    var destination = document.getElementById(Destination);
    if (document.selection.createRange().text != '') {
        document.selection.clear()
    }
    if (source.value.length == maxlength) {
        destination.focus()
    }
}
function DisplayDiv(divId) {
    var elementRef = document.getElementById(divId);
    if (elementRef.style.display = "none") {
        elementRef.style.display = "block"
    }
    return false
}
function HideDiv(divId) {
    var elementRef = document.getElementById(divId);
    elementRef.style.display = "none";
    return false
}
function HideDivPO(divId, timerId) {
    var elementRef = document.getElementById(divId);
    elementRef.style.display = "none";
    var timerRef = document.getElementById(timerId);
    timerRef.stop = true;
    timerRef.disabled = true;
    return false
}
function CompareDates(txtFromDate, txtToDate, chkDropDown, ddlFromBillDate, ddlToBillDate) {
    ShowErrorMessage("");
    if (document.getElementById(chkDropDown).checked) {
        var fromDate = document.getElementById(txtFromDate).value;
        var toDate = document.getElementById(txtToDate).value;
        if (trim(fromDate) == '' && trim(toDate) == '') {
            ShowErrorMessage("Please enter From Date and To Date");
            return false
        } else if (trim(toDate) == '') {
            ShowErrorMessage("Please enter To Date");
            return false
        } else if (trim(fromDate) == '') {
            ShowErrorMessage("Please enter From Date");
            return false
        }
        var mon1 = parseInt(fromDate.substring(0, 2), 10);
        var dt1 = parseInt(fromDate.substring(3, 5), 10);
        var yr1 = parseInt(fromDate.substring(6, 10), 10);
        var mon2 = parseInt(toDate.substring(0, 2), 10);
        var dt2 = parseInt(toDate.substring(3, 5), 10);
        var yr2 = parseInt(toDate.substring(6, 10), 10);
        var date1 = new Date(yr1, mon1, dt1);
        var date2 = new Date(yr2, mon2, dt2);
        if (date2 < date1) {
            ShowErrorMessage("To date should be greater than  From date");
            return false
        } else {
            return true
        }
    } else {
        return CompareDropDownAttributes(ddlFromBillDate, ddlToBillDate)
    }
}
function CompareToNFromDates(txtFromDate, txtToDate) {
    ShowErrorMessage("");
    var fromDate = document.getElementById(txtFromDate).value;
    var toDate = document.getElementById(txtToDate).value;
    if (trim(fromDate) == '' && trim(toDate) == '') {
        ShowErrorMessage("Please enter From Date and To Date");
        return false
    } else if (trim(toDate) == '') {
        ShowErrorMessage("Please enter To Date");
        return false
    } else if (trim(fromDate) == '') {
        ShowErrorMessage("Please enter From Date");
        return false
    }
    var mon1 = parseInt(fromDate.substring(0, 2), 10);
    var dt1 = parseInt(fromDate.substring(3, 5), 10);
    var yr1 = parseInt(fromDate.substring(6, 10), 10);
    var mon2 = parseInt(toDate.substring(0, 2), 10);
    var dt2 = parseInt(toDate.substring(3, 5), 10);
    var yr2 = parseInt(toDate.substring(6, 10), 10);
    var date1 = new Date(yr1, mon1, dt1);
    var date2 = new Date(yr2, mon2, dt2);
    if (date2 < date1) {
        ShowErrorMessage("To date should be greater than  From date");
        return false
    } else {
        return true
    }
}
function trim(stringToTrim) {
    return stringToTrim.replace(/^\s+|\s+$/g, "")
}
function calendarPickerDayNo(strField, strDay) {
    try {
        var elementRef = document.getElementById(strField);
        var formRef = elementRef.form;
        var strFieldId = formRef.id + "." + strField;
        var url = "../../Common/ShowCalendar.aspx?field=" + strFieldId + "&Day=" + strDay + "&isDay=Y";
        window.open(url, "calendarPopup", "left=255,top=235,width=230,height=225,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no")
    } catch (e) {
        alert(e)
    }
}
function calendarPickerFuture(strField) {
    try {
        var elementRef = document.getElementById(strField);
        var formRef = elementRef.form;
        var strFieldId;
        strFieldId = formRef.id + "." + strField;
        var url = "../../Common/ShowCalendar.aspx?field=" + strFieldId + "&isFuture=Y";
        window.open(url, "calendarPopup", "left=255,top=235,width=230,height=225,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no")
    } catch (e) {
        alert(e)
    }
}
function calendarPickerFutureNCurr(strField) {
    try {
        //        var elementRef = document.getElementById(strField);
        //        var formRef = elementRef.form;
        //        var strFieldId;
        //        strFieldId = formRef.id + "." + strField;
        var url = "../../Common/ShowCalenderFT.aspx?field=" + strField + "&isFutureNCurr=Y";
        window.open(url, "calendarPopup", "left=255,top=235,width=230,height=225,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no")
    } catch (e) {
        alert(e)
    }
}
function RestrictChar(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 27)) return true;
    else if (((":").indexOf(keychar) > -1)) return false;
    else return true
}
function RestrictUserID(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 27)) return true;
    if (("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_.@-").indexOf(keychar) > -1) return true;   
    else return false;     
}
function RestrictSpaces(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();   
    if ((key == 32)) return false;
    else return true
}
function RestrictID(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 27)) return true;
    else if ((("abcdefghijklmnopqrstuvwxyz0123456789").indexOf(keychar) > -1)) return true;
    else return false
}
function RestrictAlphanumericOnly(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 32) || (key == 27)) return true;
    else if ((("abcdefghijklmnopqrstuvwxyz0123456789").indexOf(keychar) > -1)) return true;
    else return false
}

function Name(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 32) || (key == 27)) return true;
    else if ((("abcdefghijklmnopqrstuvwxyz0123456789.&").indexOf(keychar) > -1)) return true;
    else return false
}

function RestrictAddress(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 32) || (key == 27)) return true;
    else if ((("abcdefghijklmnopqrstuvwxyz0123456789/@#&()-,+").indexOf(keychar) > -1)) return true;
    else return false
}

function RestrictAccountRRNos(e) {
    var key;
    var keychar;
    if (window.event) key = window.event.keyCode;
    else if (e) key = e.which;
    else return true;
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 32) || (key == 27)) return true;
    else if ((("abcdefghijklmnopqrstuvwxyz0123456789,").indexOf(keychar) > -1)) return true;
    else return false
}
function CompareElectricDropDownDates(ddlFromBillDate, ddlToBillDate, chkTextBx, txtFromDate, txtToDate) {
    ShowErrorMessage("");
    if (document.getElementById(chkTextBx).checked) {
        var fromDate = new Date();
        var str1 = document.getElementById(ddlFromBillDate).value;
        var str2 = document.getElementById(ddlToBillDate).value;
        var afromDate = str1.split("/");
        var mon1 = afromDate[0];
        var dt1 = afromDate[1];
        var yr1 = afromDate[2];
        var toDate = new Date();
        var atoDate = str2.split("/");
        var mon2 = atoDate[0];
        var dt2 = atoDate[1];
        var yr2 = atoDate[2];
        var date1 = new Date(yr1, mon1, dt1);
        var date2 = new Date(yr2, mon2, dt2);
        if (date2 < date1) {
            ShowErrorMessage("To BillDate should be greater than  From BillDate");
            return false
        } else {
            return true
        }
    } else {
        return CompareDateAttributes(txtFromDate, txtToDate)
    }
}
function CalendarPickerPast(strField) {
    try {
        var elementRef = document.getElementById(strField);
        var formRef = elementRef.form;
        var strFieldId;
        strFieldId = formRef.id + "." + strField;
        var url = "../../Common/ShowCalendar.aspx?field=" + strFieldId + "&isPast=Y";
        window.open(url, "calendarPopup", "left=255,top=235,width=230,height=225,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no")
    } catch (e) {
        alert(e)
    }
}
function CalendarPickerCurrPast(strField) {
    try {
        var elementRef = document.getElementById(strField);
        var formRef = elementRef.form;
        var strFieldId;
        strFieldId = formRef.id + "." + strField;
        var url = "../../Common/ShowCalendar.aspx?field=" + strFieldId + "&isCurrPast=Y";
        window.open(url, "calendarPopup", "left=255,top=235,width=230,height=225,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no")
    } catch (e) {
        alert(e)
    }
}
function CompareDropDownAttributes(ddlFromBillDate, ddlToBillDate) {
    ShowErrorMessage("");
    var fromDate = new Date();
    var str1 = document.getElementById(ddlFromBillDate).value;
    var str2 = document.getElementById(ddlToBillDate).value;
    var afromDate = str1.split("/");
    var mon1 = afromDate[0];
    var dt1 = afromDate[1];
    var yr1 = afromDate[2];
    var toDate = new Date();
    var atoDate = str2.split("/");
    var mon2 = atoDate[0];
    var dt2 = atoDate[1];
    var yr2 = atoDate[2];
    var date1 = new Date(yr1, mon1, dt1);
    var date2 = new Date(yr2, mon2, dt2);
    if (date2 < date1) {
        ShowErrorMessage("To BillDate should be greater than  From BillDate");
        return false
    } else {
        return true
    }
}
function RestrictAlphabetsOnly(e) {
    var key;
    var keychar;
    key = (e.keyCode || e.which);
    keychar = String.fromCharCode(key);
    keychar = keychar.toLowerCase();
    if ((key == null) || (key == 0) || (key == 8) || (key == 9) || (key == 13) || (key == 27)) return true;
    if (('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ').indexOf(keychar) > -1) {
        return true
    } else {
        return false
    }
}
function RestrictNumericOnly(evt) {
    evt = (evt) ? evt : window.event;
    var charCode = (evt.which) ? evt.which : evt.keyCode;
    if ((charCode != 31 && (charCode < 48 || charCode > 57)) && (charCode != 8) && (charCode != 9)) {
        return false
    }
    return true
}
function fnValidateEmail(element) {
    var errorMessage = "";
    var regexp = "/^(([A-Za-z0-9]+_+)|([A-Za-z0-9]+\-+)|([A-Za-z0-9]+\.+)|([A-Za-z0-9]+\++))*[A-Za-z0-9]+@((\w+\-+)|(\w+\.))*\w{1,63}\.[a-zA-Z]{2,6}$/";
    if (!regexp.test(fn_trim(element.value))) {
        return true
    } else {
        return false
    }
}
function fn_trim(str) {
    return str.replace(/^\s*|\s*$/g, "")
}
function CompareDateAttributes(txtFromDate, txtToDate) {
    ShowErrorMessage("");
    var fromDate = document.getElementById(txtFromDate).value;
    var toDate = document.getElementById(txtToDate).value;
    if (trim(fromDate) == '' && trim(toDate) == '') {
        ShowErrorMessage("Please enter From Date and To Date");
        return false
    } else if (trim(toDate) == '') {
        ShowErrorMessage("Please enter To Date");
        return false
    } else if (trim(fromDate) == '') {
        ShowErrorMessage("Please enter From Date");
        return false
    }
    var mon1 = parseInt(fromDate.substring(0, 2), 10);
    var dt1 = parseInt(fromDate.substring(3, 5), 10);
    var yr1 = parseInt(fromDate.substring(6, 10), 10);
    var mon2 = parseInt(toDate.substring(0, 2), 10);
    var dt2 = parseInt(toDate.substring(3, 5), 10);
    var yr2 = parseInt(toDate.substring(6, 10), 10);
    var date1 = new Date(yr1, mon1, dt1);
    var date2 = new Date(yr2, mon2, dt2);
    if (date2 < date1) {
        ShowErrorMessage("To date should be greater than  From date");
        return false
    } else {
        return true
    }
}
function fnRestrictPasteAlphaNumeric() {
    var pasteData = window.clipboardData.getData("Text");
    if (!IsNotAlphaNumeric(pasteData)) {
        return false
    } else {
        ShowErrorMessage("")
    }
}
function IsNotAlphaNumeric(sText) {
    var lblErrorMessage = document.getElementById("ctl00_ctl00_MasterPageContentPlaceHolder_lblErrorMessage");
    var pasteMessage = "Account ID,Account Name and Service Number should only be alphanumeric. \n";
    var ValidChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    var IsNumber = true;
    var Char;
    for (i = 0; i < sText.length && IsNumber == true; i++) {
        Char = sText.charAt(i);
        if (ValidChars.indexOf(Char) == -1) {
            IsNumber = false;
            ShowErrorMessage(pasteMessage)
        }
    }
    return IsNumber
}
function fnRestrictPasteAlphaNumeric(lblAcc) {
    var pasteData = window.clipboardData.getData("Text");
    if (!IsNotAlphaNumeric(pasteData, lblAcc)) {
        return false
    }
}
function RestrictDecimalOnly(e) {
    var val = (e.keyCode) ? e.keyCode : e.charCode;
    if ((val < 48 || val > 57) && val != 8 && val != 46) {
        return false
    }
    return true
}
function IsNotAlphaNumeric(sText, lblAcc) {
    var lblErrorMessage = document.getElementById("ctl00_ctl00_MasterPageContentPlaceHolder_lblErrorMessage");
    var pasteMessage = lblAcc + " contains only alphanumeric. \n";
    var ValidChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    var IsNumber = true;
    var Char;
    for (i = 0; i < sText.length && IsNumber == true; i++) {
        Char = sText.charAt(i);
        if (ValidChars.indexOf(Char) == -1) {
            IsNumber = false;
            ShowErrorMessage(pasteMessage)
        }
    }
    return IsNumber
}
function fnRestrictPasteAlphabets(lblName) {
    var pasteData = window.clipboardData.getData("Text");
    if (!IsNotAlphabet(pasteData, lblName)) {
        return false
    }
}
function IsNotAlphabet(sText, lblName) {
    var lblErrorMessage = document.getElementById("ctl00_ctl00_MasterPageContentPlaceHolder_lblErrorMessage");
    var pasteMessage = lblName + " contains only alphabets. \n";
    var ValidChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    var IsNumber = true;
    var Char;
    for (i = 0; i < sText.length && IsNumber == true; i++) {
        Char = sText.charAt(i);
        if (ValidChars.indexOf(Char) == -1) {
            IsNumber = false;
            ShowErrorMessage(pasteMessage)
        }
    }
    return IsNumber
}
function fnRestrictPasteDigits(lable) {
    var pasteData = window.clipboardData.getData("Text");
    if (!IsNotDigit(pasteData, lable)) {
        return false
    } else {
        ShowErrorMessage("")
    }
}
function IsNotDigit(sText, lable) {
    var pasteMessage = lable + " contains only digits. \n";
    var ValidChars = "1234567890";
    var IsNumber = true;
    var Char;
    for (i = 0; i < sText.length && IsNumber == true; i++) {
        Char = sText.charAt(i);
        if (ValidChars.indexOf(Char) == -1) {
            IsNumber = false;
            ShowErrorMessage(pasteMessage)
        }
    }
    return IsNumber
}
function SetFocus(Source, Destination, maxlength) {
    var source = document.getElementById(Source);
    var destination = document.getElementById(Destination);
    if (document.selection.createRange().text != '') {
        document.selection.clear()
    }
    if (source.value.length == maxlength) {
        destination.focus()
    }
}
function DisableCheckBox(cbShowTier) {
    var elementRef = document.getElementById(cbShowTier);
    elementRef.checked = false;
    elementRef.disabled = true
}
function EnableCheckBox(cbShowTier) {
    var elementRef = document.getElementById(cbShowTier);
    elementRef.disabled = false
}
function fnCheckNull(ctrl) {
    var isNull = false;
    var txtControl = document.getElementById(ctrl.id);
    if (fn_trim(txtControl.value) == "") {
        isNull = true
    } else {
        txtControl.style.borderStyle = "inset";
        txtControl.style.borderColor = "";
        isNull = false
    }
    return isNull
}
function fnValidatePhoneNumber(Phone1, Phone2, Phone3, isMandatory) {
    if (!fnCheckNull(Phone1) || !fnCheckNull(Phone2) || !fnCheckNull(Phone3)) {
        if (!fnCheckNull(Phone1)) {
            if (!fnMinLength(Phone1, 3, null)) {
                errormessage = "Please enter 3 digits." + "\n";
                ShowErrorMessage(errormessage);
                Phone1.focus();
                return false
            } else if (!IsNumeric(Phone1.value)) {
                Phone1.focus();
                return false
            }
        } else {
            errormessage = "Please enter 3 digits." + "\n";
            ShowErrorMessage(errormessage);
            Phone1.focus();
            return false
        }
        if (!fnCheckNull(Phone2)) {
            if (!fnMinLength(Phone2, 3, null)) {
                errormessage = "Please enter 3 digits." + "\n";
                ShowErrorMessage(errormessage);
                Phone2.focus();
                return false
            } else if (!IsNumeric(Phone2.value)) {
                Phone2.focus();
                return false
            }
        } else {
            errormessage = "Please enter 3 digits." + "\n";
            ShowErrorMessage(errormessage);
            Phone2.focus();
            return false
        }
        if (!fnCheckNull(Phone3)) {
            if (!fnMinLength(Phone3, 4, null)) {
                errormessage = "Please enter 4 digits." + "\n";
                ShowErrorMessage(errormessage);
                Phone3.focus();
                return false
            } else if (!IsNumeric(Phone3.value)) {
                Phone3.focus();
                return false
            }
        } else {
            errormessage = "Please enter 4 digits." + "\n";
            ShowErrorMessage(errormessage);
            Phone3.focus();
            return false
        }
        return true
    } else {
        if (isMandatory) {
            errormessage = "Please enter Phone Number" + "\n";
            ShowErrorMessage(errormessage);
            Phone1.focus();
            return false
        } else {
            return true
        }
    }
}
function fnMinLength(element, length, name) {
    var result = true;
    if (element.value.length < length) {
        result = false
    }
    return result
}
function fnRestrictPasteNonDecimal(lblName) {
    var pasteData = window.clipboardData.getData("Text");
    var pasteMessage = lblName + " contains only decimal values. \n";
    if (!IsDecimal(pasteData)) {
        ShowErrorMessage(pasteMessage);
        return false
    } else {
        ShowErrorMessage("")
    }
}
function IsNumeric(sText) {
    var ValidChars = "0123456789";
    var IsNumber = true;
    var Char;
    for (i = 0; i < sText.length && IsNumber == true; i++) {
        Char = sText.charAt(i);
        if (ValidChars.indexOf(Char) == -1) {
            IsNumber = false
        }
    }
    return IsNumber
}
function IsDecimal(sText, maxBefore, maxAfter) {
    var flag = true;
    var reString = "^([0-9]*)(.)?([0-9]+)$";
    if (!window.RE) window.RE = new RegExp(reString);
    else RE.compile(reString);
    if (!RE.test(sText)) {
        return false
    }
    if (maxBefore && maxAfter) {
        reString = "^\\d{0," + maxBefore + "}(\\.\\d{0," + maxAfter + "})?$";
        if (!window.RE) window.RE = new RegExp(reString);
        else RE.compile(reString);
        if (!RE.test(sText)) {
            return false;
            input.value = input.value.slice(0, -1)
        }
    }
    return true
}
function fnGetRadionListSelectedIndex(radioButtons) {
    var iResult = -1;
    for (i = 0; i < radioButtons.length; i++) {
        if (radioButtons[i].checked == true) {
            iResult = i
        }
    }
    return iResult
}
function OpenModalCalendar(url) {
    try {
        var winSettings = "center:yes;resizable:no;dialogWidth:200px;dialogHeight:380px;scroll:no;status:no";
        var retVal = window.showModalDialog(url, "Your Baseline Demand", winSettings)
    } catch (e) {}
}
function calendarPickerFutureAndPast(strField) {
    try {
        var elementRef = document.getElementById(strField);
        var formRef = elementRef.form;
        var strFieldId;
        strFieldId = formRef.id + "." + strField;
        var url = "../../Common/ShowCalendar.aspx?field=" + strFieldId + "&isFutNPast=Y";
        window.open(url, "calendarPopup", "left=255,top=235,width=230,height=225,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no")
    } catch (e) {
        alert(e)
    }
}
function fnValidateZIPCodes(txtZipCode, txtZipPlus, isMandatory) {
    if (isMandatory) {
        if (fnCheckNull(txtZipCode)) {
            ShowErrorMessage(" Please enter ZIP code .");
            txtZipCode.focus();
            return false
        }
    }
    if (fnCheckNull(txtZipCode) && !fnCheckNull(txtZipPlus)) {
        errormessage = " Please enter ZIP code .";
        txtZipCode.focus();
        ShowErrorMessage(errormessage);
        return false
    }
    if (!fnCheckNull(txtZipCode)) {
        if (!fnMinLength(txtZipCode, 5, null)) {
            errormessage = "Please enter 5 digit ZIP code";
            txtZipCode.focus();
            ShowErrorMessage(errormessage);
            return false
        }
        if (!fnCheckNull(txtZipPlus)) {
            if (!fnMinLength(txtZipPlus, 4, null)) {
                errormessage = "Please enter 4 digit ZIP code";
                txtZipPlus.focus();
                ShowErrorMessage(errormessage);
                return false
            }
        }
    }
    return true
}
function openNNDetailsPopUp(strItemId, strItemType) {
    var url = "../SCP/MyAccount/NickNamePopUp.aspx?itemID=" + strItemId + "&itemType=" + strItemType + "";
    window.open(url, "NickNameDetails", "left=500,top=235,width=400,height=300,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no");
    return false
}
function OpenEnergySavingPopUp(url) {
    try {
        var winSettings = "center:yes;resizable:no;dialogWidth:600px;dialogHeight:650px;scroll:no;status:no";
        var retVal = window.showModalDialog(url, "Energy Saving Alternatives", winSettings)
    } catch (e) {}
}
function OpenPaymentCentrePopUp(latitude, longitude) {
    try {
        if (navigator.onLine) {
            debugger;
            var url = "PaymentCentreLocator.aspx?latitude=" + latitude + "&longitude=" + longitude;
            var winSettings = "center:yes;resizable:no;dialogWidth:600px;dialogHeight:600px;scroll:no;status:no";
            var retVal = window.showModalDialog(url, "Payment Centre Locator", winSettings)
        } else {
            window.alert("You need to first connect to the Internet.")
        }
    } catch (e) {}
}
function OpenMessageBodyPopUp(messageKey) {
    try {
        var url = "MessageBody.aspx?itemID=" + messageKey;
        var winSettings = "center:yes;resizable:no;dialogWidth:850px;dialogHeight:400px;scroll:no;status:no";
        var retVal = window.showModalDialog(url, "Message Details", winSettings)
    } catch (e) {}
}
function openMessageDetailsPopUp(strItemId, strItemType) {
    var url = "MessageBody.aspx?itemID=" + strItemId + "&itemType=" + strItemType + "";
    window.open(url, "NickNameDetails", "left=500,top=235,width=400,height=300,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no")
}
function fnDefaultEnterPress(element) {
    var btn = document.getElementById(element);
    
    if (event.keyCode == 13) 
    {   
        if (document.activeElement.type != "submit" && document.activeElement.type != "Submit" && document.activeElement.tagName != "A") 
        {
            btn.click();
            return false
        }
    }
}

function PrintImage(chartPath) {
    var chartImageId = "ctl00_ctl00_MasterPageContentPlaceHolder_MasterPageContentPlaceHolder_" + chartPath;
    printWindow = window.open("", "mywindow", "location=1,status=1,scrollbars=1,width=700,height=450");
    printWindow.document.write("<div style='width:100%;'>");
    printWindow.document.write("<img id='img' src='" + document.getElementById(chartImageId).src + "'/>");
    printWindow.document.write("</div>");
    printWindow.document.close();
    printWindow.print()
}

function PrintUsage(AccountId) 
{   
    printWindow = window.open("PrintUsageHistory.aspx?AccountId="+ AccountId, "mywindow", "location=1,status=1,scrollbars=1,width=685,height=610");
    printWindow.print()
}

function PrintUsageCal(AccountId,FromDate,ToDate) 
{   
    printWindow = window.open("PrintUsageHistory.aspx?AccountId="+ AccountId +"&FromDate="+FromDate+"&ToDate="+ToDate, "mywindow", "location=1,status=1,scrollbars=1,width=685,height=610");
    printWindow.print()
}

function openFeedback(pageName, appPath) {
    try {
        var currentURL = window.location;
        var url = "http://" + currentURL.host + appPath + "/Common/PageFeedback/PageFeedback.aspx?pageName=" + pageName;
        window.open(url, "PageFeedback", "left=255px,top=10px,width=670px,height=480px,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no");
        return false
    } catch (e) {}
    return false
}

function openTowns(appPath) {
    try {
        var currentURL = window.location;
        var url = "http://" + currentURL.host + appPath + "/SCP/General/Towns.aspx";
        window.open(url, "Towns", "left=255px,top=50px,width=400px,height=650px,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no");
        return false
    } catch (e) {}
    return false
}

function openSDOs(appPath) {
    try {
        var currentURL = window.location;
        var url = "http://" + currentURL.host + appPath + "/SCP/General/SDOs.aspx";
        window.open(url, "SDOs", "left=255px,top=0px,width=600px,height=690px,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no");
        return false
    } catch (e) { }
    return false
}

function openSectionOffice(appPath,strSDO) {
    try {
        var currentURL = window.location;
        var url = "http://" + currentURL.host + appPath + "/SCP/CSR/SectionOffice.aspx?SDO="+strSDO;
        window.open(url, "Towns", "left=255px,top=50px,width=400px,height=550px,toolbar=no,menubar=no,location=no,resizable=no,scrollbars=no,status=no");
        return false
    } catch (e) {}
    return false
}