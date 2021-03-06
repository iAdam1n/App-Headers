/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxAttachmentViewDelegate.h>
#import <Messenger/MNHorizontalScrollInboxUnitViewListening.h>

@protocol MNInboxRecentlyClickedLinkViewControllerDelegate;
@class MNImageRequester, NSString;

@interface MNInboxRecentlyClickedLinkViewController : NSObject <MNInboxAttachmentViewDelegate, MNHorizontalScrollInboxUnitViewListening> {

	MNImageRequester* _imageRequester;
	id<MNInboxRecentlyClickedLinkViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInboxRecentlyClickedLinkViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageRequester:(id)arg1 ;
-(void)viewWillAppear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidDisappear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidTap:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidHighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidUnhighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewModelsWillAppear:(id)arg1 ;
-(void)viewModelsWillDisappear:(id)arg1 ;
-(void)viewAnimationDidStop:(id)arg1 withViewModel:(id)arg2 ;
-(void)_fetchImagesForView:(id)arg1 viewModel:(id)arg2 ;
-(void)_fetchPhotoWithSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attachmentViewDidTapShare:(id)arg1 ;
-(void)attachmentViewDidTapReadMore:(id)arg1 ;
-(void)setDelegate:(id<MNInboxRecentlyClickedLinkViewControllerDelegate>)arg1 ;
-(id<MNInboxRecentlyClickedLinkViewControllerDelegate>)delegate;
@end

