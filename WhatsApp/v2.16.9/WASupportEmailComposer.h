/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/ProblemInputControllerDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class WASupportDebugFields, WAFieldStatsEventContactUsSession, NSString, UIViewController;

@interface WASupportEmailComposer : NSObject <ProblemInputControllerDelegate, MFMailComposeViewControllerDelegate> {

	WASupportDebugFields* _supportDebugFields;
	WAFieldStatsEventContactUsSession* _fsEvent;
	WASupportEmailComposer* _retainedSelf;
	double _supportStartTime;
	BOOL _skipServerStatusCheck;
	BOOL _suppressHUD;
	/*^block*/id _completion;
	NSString* _initialText;
	UIViewController* _controller;

}

@property (nonatomic,retain) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * context; 
@property (nonatomic,copy) NSString * initialText;                       //@synthesize initialText=_initialText - In the implementation block
@property (nonatomic,copy) NSString * countryCode; 
@property (assign,nonatomic) BOOL skipServerStatusCheck;                 //@synthesize skipServerStatusCheck=_skipServerStatusCheck - In the implementation block
@property (assign,nonatomic) BOOL registration; 
@property (assign,nonatomic) BOOL suppressHUD;                           //@synthesize suppressHUD=_suppressHUD - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)composer;
-(void)setRegistration:(BOOL)arg1 ;
-(void)setSuppressHUD:(BOOL)arg1 ;
-(void)problemInputController:(id)arg1 didFinishWithText:(id)arg2 logsAttachment:(id)arg3 imageAttachments:(id)arg4 ;
-(void)problemInputController:(id)arg1 didCancelWithText:(id)arg2 imageAttachments:(id)arg3 ;
-(void)finishComposerWithResult:(BOOL)arg1 ;
-(void)presentDirectEmailSupportFlow;
-(void)presentNoConnectionSupportFlow;
-(BOOL)skipServerStatusCheck;
-(BOOL)suppressHUD;
-(void)fillFieldStatEventOnCallbackFromProblemInputController:(id)arg1 ;
-(void)composeEmailWithProblemDescription:(id)arg1 logsAttachment:(id)arg2 imageAttachments:(id)arg3 ;
-(void)setSkipServerStatusCheck:(BOOL)arg1 ;
-(void)cancel;
-(id)init;
-(NSString *)context;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(BOOL)registration;
-(void)setInitialText:(NSString *)arg1 ;
-(NSString *)initialText;
@end

