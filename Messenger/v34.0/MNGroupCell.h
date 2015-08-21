/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNGroupItemViewDelegate.h>

@protocol MNGroupCellDelegate;
@class MNGroupItemView, MNGroupItem, MNProfileImageView, NSString;

@interface MNGroupCell : UICollectionViewCell <MNGroupItemViewDelegate> {

	MNGroupItemView* _groupItemView;
	BOOL _isDragging;
	id<MNGroupCellDelegate> _delegate;

}

@property (nonatomic,retain) MNGroupItem * groupItem; 
@property (assign,nonatomic) BOOL isDragging;                                      //@synthesize isDragging=_isDragging - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * groupImageView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNGroupItem *)groupItem;
-(void)setGroupItem:(MNGroupItem *)arg1 ;
-(MNProfileImageView *)groupImageView;
-(void)setIsDragging:(BOOL)arg1 ;
-(CGSize)membersLabelContraintSize;
-(id)membersLabelFont;
-(void)groupItemViewDidPressMoreFromSourceView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNGroupCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)isDragging;
-(id<MNGroupCellDelegate>)delegate;
@end

