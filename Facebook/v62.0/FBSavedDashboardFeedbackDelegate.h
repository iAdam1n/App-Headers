/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSavedDashboardFeedbackDelegate <NSObject>
@optional
-(void)feedbackManagerOpened:(id)arg1 forItem:(id)arg2 buttonLoggingOptions:(id)arg3;

@required
-(void)saveFeedbackManager:(id)arg1 feedbackSelected:(int)arg2 forItem:(id)arg3;
-(BOOL)saveFeedbackManager:(id)arg1 feedBackTypeSupported:(int)arg2;

@end
