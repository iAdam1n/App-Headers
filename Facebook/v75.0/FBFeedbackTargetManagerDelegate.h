/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedbackTargetManagerDelegate <NSObject>
@required
-(void)feedbackTargetManager:(id)arg1 didUpdateFeedbackTarget:(id)arg2;
-(void)feedbackTargetManagerTargetDidDisappear:(id)arg1;
-(id)commentToolboxForFeedbackTargetManager:(id)arg1;
-(void)feedbackTargetManager:(id)arg1 redirectToFallbackURL:(id)arg2;
-(void)feedbackTargetManager:(id)arg1 didDownloadFeedbackTarget:(id)arg2;
-(void)feedbackTargetManagerDidFailToDownloadFeedbackTarget:(id)arg1;
-(void)feedbackTargetManagerScrollBottomOfFeedbackTargetToMiddleOfScreen:(id)arg1;
-(void)feedbackTargetManager:(id)arg1 disableAllSections:(BOOL)arg2;
-(void)feedbackTargetManager:(id)arg1 hideCommentComposer:(BOOL)arg2 animated:(BOOL)arg3;
-(void)feedbackTargetManager:(id)arg1 updateContextAndEnqeueReloadWithCellTheme:(unsigned long long)arg2 ufiCommentTheme:(unsigned long long)arg3;
-(id)feedbackTargetManagerHeaderView:(id)arg1;
-(void)feedbackTargetManagerScrollToTopOfCommentsSection:(id)arg1;

@end
