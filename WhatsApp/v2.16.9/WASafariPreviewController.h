/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>

@class UIView, UILabel, SFSafariViewController, NSURL;

@interface WASafariPreviewController : WAViewController {

	UIView* _headerView;
	UILabel* _titleLabel;
	SFSafariViewController* _safariViewController;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)previewActionItems;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
@end
