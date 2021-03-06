//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAppleIDAuthenticationDaemonProtocol-Protocol.h"
#import "AKDServerUIDelegate-Protocol.h"
#import "AKPiggybackRequestingControllerDelegate-Protocol.h"

@class AKAccountManager, AKAuthenticationTrafficController, AKAuthenticationUILiaison, AKClient, CUTReachability, NSString;
@protocol AKAppleIDAuthSupportProxy;

@interface AKAppleIDAuthenticationService : NSObject <AKPiggybackRequestingControllerDelegate, AKDServerUIDelegate, AKAppleIDAuthenticationDaemonProtocol>
{
    AKClient *_client;
    NSObject<AKAppleIDAuthSupportProxy> *_authProxy;
    AKAccountManager *_accountManager;
    AKAuthenticationTrafficController *_authTrafficController;
    AKAuthenticationUILiaison *_authUILiaison;
    CUTReachability *_reachability;
}

- (void).cxx_destruct;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldSkipAccountUpdatesForAuthWithContext:(id)arg1;
- (void)_updateAuthKitAccount:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)piggyback:(id)arg1 handleVerificationWithError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)piggyback:(id)arg1 handleEscapeHatchError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)piggyback:(id)arg1 shouldContinueWithCompletion:(CDUnknownBlockType)arg2;
- (void)piggyback:(id)arg1 validateSecurityCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)piggyback:(id)arg1 promptForRandomCodeWithCompletion:(CDUnknownBlockType)arg2;
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 context:(id)arg3;
- (void)_beginChangePasswordFlowWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_changePasswordAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginAppleIDCreationFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createNewAppleIDAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_addAccountNameParameterToURL:(id)arg1 withContext:(id)arg2;
- (void)_beginiForgotFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_recoverCredentialsAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchTokensForServiceIDs:(id)arg1 withUsername:(id)arg2 altDSID:(id)arg3 masterToken:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)serverUIDelegateWithAuthResponse:(id)arg1;
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)serverUIContext:(id)arg1 processAdditionalData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldProcessAdditionalServerUIData:(id)arg1;
- (void)_beginServerDrivenSecondaryActionWithURLKey:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_showAlertForLoginCodeValidationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processValidationCodeSuccessResponse:(id)arg1 authResponse:(id)arg2 results:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 piggybacking:(_Bool)arg4 initialAuthResponse:(id)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 initialAuthResponse:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isTouchIDRequiredForGrandSlamServiceTokenWithID:(id)arg1;
- (void)_updateCredentialForSavedAIDAAccount:(id)arg1 withNewTokens:(id)arg2;
- (void)_persistGrandSlamServiceTokens:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_completeAuthenticationWithServiceTokens:(id)arg1 tokenFetchError:(id)arg2 altDSID:(id)arg3 authenticationResults:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_provideServiceTokensIfRequiredForContext:(id)arg1 authenticationResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSuccessfulVerificationForAccount:(id)arg1 withResults:(id)arg2 serverResponse:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_shouldContinueAuthenticatingAccount:(id)arg1 username:(id)arg2 password:(id)arg3 serverResponse:(id)arg4 didShowServerUI:(_Bool)arg5 continuationData:(id)arg6 error:(id)arg7 context:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_handleVerificationCompletionForAccount:(id)arg1 username:(id)arg2 password:(id)arg3 serverResponse:(id)arg4 didShowServerUI:(_Bool)arg5 continuationData:(id)arg6 error:(id)arg7 context:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_performSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPiggybackingForServerResponse:(id)arg1 context:(id)arg2 authKitAccount:(id)arg3 password:(id)arg4 username:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_checkFreshnessAndVerifyWithPassword:(id)arg1 serverResponse:(id)arg2 additionalData:(id)arg3 secondaryActionError:(id)arg4 context:(id)arg5 newServerResponse:(id)arg6 username:(id)arg7 authKitAccount:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_verifyUsername:(id)arg1 password:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_showAlertForLoginError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_titleAndMessageForError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_validateUsernameMatchesAltDSIDForAuthContext:(id)arg1;
- (void)_performInteractiveAuthWithContext:(id)arg1 nonInteractiveAuthError:(id)arg2 nonInteractiveAuthResults:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performSilentServiceTokenAuthWithContext:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performContinuationAuthWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_accountForContinuationAuthWithContext:(id)arg1 allowSuggestions:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_attemptContinuationAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performShortLivedTokenUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptShortLivedTokenUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)persistMasterKeyVerifier:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptNonInteractiveOptionsForAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isInteractiveAuthRequiredForContext:(id)arg1;
- (void)_authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkSecurityUpgradeEligibilityForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_validateLoginCode:(unsigned long long)arg1 forAltDSID:(id)arg2 masterToken:(id)arg3 idmsData:(id)arg4 authContext:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeLoginCode:(CDUnknownBlockType)arg1;
- (void)isDevicePasscodeProtected:(CDUnknownBlockType)arg1;
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setAuthKitAccount:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchURLBagWithCompletion:(CDUnknownBlockType)arg1;
- (void)emailsForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithProxy:(id)arg1;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

