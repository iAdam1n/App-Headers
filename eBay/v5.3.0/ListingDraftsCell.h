/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/eBayTableViewCell.h>

@class ItemPictureView;

@interface ListingDraftsCell : eBayTableViewCell {

	ItemPictureView* _pictureView;

}

@property (nonatomic,retain) ItemPictureView * pictureView;              //@synthesize pictureView=_pictureView - In the implementation block
-(ItemPictureView *)pictureView;
-(void)setPictureView:(ItemPictureView *)arg1 ;
-(void)imageLoader:(id)arg1 finishedWithImage:(id)arg2 ;
-(CGRect)calcImageFrame;
-(void)setupWithDraft:(id)arg1 placeHolderImage:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
@end

