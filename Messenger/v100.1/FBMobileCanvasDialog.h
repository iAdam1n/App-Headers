/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMobileCanvasDialog <NSObject>
@optional
-(void)dialogDidLoad:(id)arg1;

@required
-(id)openDialogWithURL:(id)arg1;
-(void)setCancelButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
-(void)setActionButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
-(void)closeDialog:(id)arg1;
-(id)webView;
-(void)close;

@end
