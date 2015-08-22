/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNFramedGroupPictureViewDelegate.h>

@protocol MNAdminMessageCollectionViewCellDelegate;
@class FBRichTextView, FBLazyCreator, FBMMessageAttachments, MNAdminMessageCellLayout, MNThreadImageManager, FBImageDownloader, MNAdminMessageContentExtractor, MNMessageRow, FBMMessageAppModel, NSString;

@interface MNAdminMessageCollectionViewCell : UICollectionViewCell <MNFramedGroupPictureViewDelegate> {

	FBRichTextView* _label;
	FBLazyCreator* _groupPictureViewCreator;
	FBMMessageAttachments* _messageAttachments;
	MNAdminMessageCellLayout* _cellLayout;
	MNThreadImageManager* _imageManager;
	FBImageDownloader* _imageDownloader;
	MNAdminMessageContentExtractor* _contentExtractor;
	id<MNAdminMessageCollectionViewCellDelegate> _delegate;
	MNMessageRow* _messageRow;
	FBMMessageAppModel* _message;

}

@property (assign,nonatomic,__weak) id<MNAdminMessageCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNMessageRow * messageRow;                                                 //@synthesize messageRow=_messageRow - In the implementation block
@property (nonatomic,copy) FBMMessageAppModel * message;                                                //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessageRow:(MNMessageRow *)arg1 ;
-(MNMessageRow *)messageRow;
-(id)initWithFrame:(CGRect)arg1 messageAttachments:(id)arg2 messageCellLayout:(id)arg3 threadImageManager:(id)arg4 imageDownloader:(id)arg5 contentExtractor:(id)arg6 ;
-(id)photoViewModelForMessage:(id)arg1 ;
-(void)_downloadImageWithURL:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)_addImageForGroupPictureView:(id)arg1 ;
-(void)framedGroupPictureViewDidPerformTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNAdminMessageCollectionViewCellDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<MNAdminMessageCollectionViewCellDelegate>)delegate;
-(FBMMessageAppModel *)message;
-(void)setMessage:(FBMMessageAppModel *)arg1 ;
@end
