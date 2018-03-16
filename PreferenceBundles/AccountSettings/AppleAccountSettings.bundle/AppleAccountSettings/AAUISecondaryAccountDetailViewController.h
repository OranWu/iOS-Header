//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import "AAUIAccountRepairRemoteUIDelegate-Protocol.h"
#import "AAUIGenericTermsRemoteUIDelegate-Protocol.h"

@class AAUIAccountRepairRemoteUI, AAUIGenericTermsRemoteUI, ACAccount, ACAccountType, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface AAUISecondaryAccountDetailViewController : ACUIViewController <AAUIGenericTermsRemoteUIDelegate, AAUIAccountRepairRemoteUIDelegate>
{
    NSOperationQueue *_networkingOperationQueue;
    ACAccount *_account;
    ACAccountType *_appleAccountType;
    ACAccount *_appleAccount;
    _Bool _isPasswordDirty;
    _Bool _isAccountDirty;
    _Bool _shouldHideBackButton;
    NSString *_initialTitle;
    AAUIAccountRepairRemoteUI *_accountRepairRemoteUI;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    NSMutableArray *_pendingCompletionBundles;
    NSMutableDictionary *_assistantDelegates;
    id _textFieldTextDidChangeObserver;
}

- (void).cxx_destruct;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)_showGenericTermsUIforAccount:(id)arg1;
- (void)_accountRepairDidFail;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(_Bool)arg3;
- (void)_loadAccountRepairRemoteUIWithAccount:(id)arg1;
- (void)_attemptHSALoginForAccount:(id)arg1;
- (void)_updateAccountInformation:(id)arg1;
- (id)_learnMoreURLForErrorCode:(id)arg1;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_presentUnableToSaveAccountAlert;
- (void)_presentInvalidUsernameAlert;
- (void)_presentNoMailServiceWhileInMailAlert;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (void)_saveExistingAccountAndDismiss;
- (void)_didFinishAccountVerificationWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_verifyUpdatedAccount;
- (void)_loadMailSettingsBundleIfNeeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_textFieldValueDidChange:(id)arg1;
- (id)_mailAccountUsername:(id)arg1;
- (void)_setAccountDescription:(id)arg1 withSpecifier:(id)arg2;
- (id)_accountDescriptionForSpecifier:(id)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (id)_usernameForSpecifier:(id)arg1;
- (id)_specifiersForLoginForm;
- (id)_specifiersForEditingExistingAccount;
- (id)specifiers;
- (void)_updateDoneButton;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_processUserInfoDictionary;
- (id)_appleAccountType;
- (id)_displayedAccountType;
- (id)descriptionPlaceholder;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
