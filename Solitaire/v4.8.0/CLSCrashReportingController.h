/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/CLSNetworkClientDelegate.h>
#import <SolitaireFree/CLSReportsControllerDelegate.h>

@protocol CLSCrashReportingControllerDelegate;
@class CLSFileManager, CLSNetworkClient, CLSReportsController, NSOperationQueue, CLSSettings, UIAlertView, CLSInternalReport, NSString;

@interface CLSCrashReportingController : NSObject <CLSNetworkClientDelegate, CLSReportsControllerDelegate> {

	CLSFileManager* _fileMananger;
	CLSNetworkClient* _networkClient;
	CLSReportsController* _reportsController;
	NSOperationQueue* _operationQueue;
	CLSSettings* _settings;
	long long _alwaysSendButtonIndex;
	UIAlertView* _crashReportSubmissionAlert;
	CLSInternalReport* _promptedReport;
	long long _promptChoice;
	id<CLSCrashReportingControllerDelegate> _delegate;
	CLSFileManager* _fileManager;

}

@property (assign,nonatomic,__weak) id<CLSCrashReportingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                    //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) CLSNetworkClient * networkClient;                                     //@synthesize networkClient=_networkClient - In the implementation block
@property (nonatomic,readonly) CLSReportsController * reportsController; 
@property (nonatomic,retain) CLSFileManager * fileManager;                                         //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)APIKey;
-(id)installIdentifier;
-(CLSNetworkClient *)networkClient;
-(BOOL)canProcessUrgentReports;
-(id)clientWithOperationQueue:(id)arg1 ;
-(BOOL)checkPreconditions;
-(BOOL)prepareForNewLaunch;
-(BOOL)checkForAndCreateLaunchMarker;
-(id)setupCurrentReport;
-(BOOL)startCrashReporterWithAPIKey:(id)arg1 betaToken:(id)arg2 profilingMark:(unsigned long long)arg3 report:(id)arg4 ;
-(void)processExistingReportPaths:(id)arg1 asUrgent:(BOOL)arg2 ;
-(void)handleContentsInOtherReportingDirectories;
-(BOOL)firstInstall;
-(unsigned)machExceptionMask;
-(void)installCrashReportingHandlers:(SCD_Struct_CL49*)arg1 ;
-(void)crashReportingSetupCompleted:(unsigned long long)arg1 ;
-(void)checkForUserPromptSetting;
-(BOOL)removeLaunchFailureMarker;
-(CLSReportsController *)reportsController;
-(BOOL)attemptCurrentReportSubmission;
-(BOOL)needsToPrompt;
-(BOOL)delegateNeedsToBeInformedOfReports;
-(void)setupStateNotifications;
-(BOOL)createLaunchFailureMarker;
-(void)processExistingActiveReportPath:(id)arg1 asUrgent:(BOOL)arg2 ;
-(void)handleDelegateCompletionForReport:(id)arg1 submit:(BOOL)arg2 ;
-(void)removeReport:(id)arg1 ;
-(void)displayPermissionAlertForReport:(id)arg1 ;
-(void)handleExistingFilesInProcessing;
-(void)handleExistingFilesInPrepared;
-(void)uploadPreexistingFiles:(id)arg1 ;
-(void)setupAndDisplayAlertWithTitle:(id)arg1 message:(id)arg2 cancel:(id)arg3 send:(id)arg4 alwaysSend:(id)arg5 report:(id)arg6 ;
-(void)handlePromptCompleteForReport:(id)arg1 shouldSubmit:(BOOL)arg2 shouldMarkAlwaysSubmit:(BOOL)arg3 ;
-(id)launchFailureMarkerPath;
-(BOOL)launchFailureMarkerPresent;
-(void)captureInitialNotificationStates;
-(void)willBecomeActive:(id)arg1 ;
-(void)didBecomeInactive:(id)arg1 ;
-(void)didChangeUIOrientation:(id)arg1 ;
-(void)retryUploadForReportAtPath:(id)arg1 ;
-(BOOL)networkClientCanUseBackgroundSessions:(id)arg1 ;
-(void)networkClient:(id)arg1 didFinishUploadWithPath:(id)arg2 error:(id)arg3 ;
-(void)reportsController:(id)arg1 didCompletePackageSubmission:(id)arg2 error:(id)arg3 ;
-(void)reportsControllerDidCompleteAllSubmissions:(id)arg1 ;
-(id)settingsForReportsController:(id)arg1 ;
-(id)APIKeyForReportsController:(id)arg1 ;
-(id)bundleIdentifierForReportsController:(id)arg1 ;
-(id)initWithFileManager:(id)arg1 delegate:(id)arg2 ;
-(BOOL)startWithProfilingMark:(unsigned long long)arg1 betaToken:(id)arg2 ;
-(void)deliverCrashDelegateCallback;
-(BOOL)potentiallySubmittableCrashOccurred;
-(BOOL)packagingEnabled;
-(void)setNetworkClient:(CLSNetworkClient *)arg1 ;
-(void)setDelegate:(id<CLSCrashReportingControllerDelegate>)arg1 ;
-(id<CLSCrashReportingControllerDelegate>)delegate;
-(id)settings;
-(id)bundleIdentifier;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(CLSFileManager *)fileManager;
-(void)setFileManager:(CLSFileManager *)arg1 ;
-(void)didChangeOrientation:(id)arg1 ;
@end

