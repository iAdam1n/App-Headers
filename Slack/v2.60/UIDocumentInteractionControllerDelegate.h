/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol UIDocumentInteractionControllerDelegate <NSObject>
@optional
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1;
-(CGRect*)documentInteractionControllerRectForPreview:(id)arg1;
-(id)documentInteractionControllerViewForPreview:(id)arg1;
-(void)documentInteractionControllerWillBeginPreview:(id)arg1;
-(void)documentInteractionControllerDidEndPreview:(id)arg1;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
-(void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
-(BOOL)documentInteractionController:(id)arg1 canPerformAction:(SEL)arg2;
-(BOOL)documentInteractionController:(id)arg1 performAction:(SEL)arg2;

@end

