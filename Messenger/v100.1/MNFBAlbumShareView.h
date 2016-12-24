/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNFBAlbumShareViewDelegate;
@class MNFBAlbumShareImagesView, MNAttachmentShareTextView, MNFBAlbumShareViewModel, NSString;

@interface MNFBAlbumShareView : UIControl <MNAttachmentView> {

	MNFBAlbumShareImagesView* _imagesView;
	MNAttachmentShareTextView* _shareTextView;
	MNFBAlbumShareViewModel* _viewModel;
	id<MNFBAlbumShareViewDelegate> _delegate;

}

@property (nonatomic,copy) MNFBAlbumShareViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNFBAlbumShareViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)_notifyDidSelectAlbum;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNFBAlbumShareViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFBAlbumShareViewDelegate>)delegate;
-(void)setImages:(id)arg1 ;
-(MNFBAlbumShareViewModel *)viewModel;
-(void)setViewModel:(MNFBAlbumShareViewModel *)arg1 ;
@end
