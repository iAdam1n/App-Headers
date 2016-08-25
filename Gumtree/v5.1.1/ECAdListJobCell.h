/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdListBaseCell.h>

@class ECAdListJobView;

@interface ECAdListJobCell : ECAdListBaseCell {

	ECAdListJobView* _jobView;

}

@property (nonatomic,retain) ECAdListJobView * jobView;              //@synthesize jobView=_jobView - In the implementation block
-(id)badgeLabel;
-(void)setBadgeLabel:(id)arg1 ;
-(void)setThumbnailImageView:(id)arg1 ;
-(id)disabledOverView;
-(void)setDisabledOverView:(id)arg1 ;
-(void)setJobView:(ECAdListJobView *)arg1 ;
-(void)setupThumbnail:(id)arg1 placeHolderImageManager:(id)arg2 ;
-(void)setupWithAd:(id)arg1 options:(unsigned long long)arg2 appConfig:(id)arg3 adManager:(id)arg4 placeHolderImageManager:(id)arg5 ;
-(ECAdListJobView *)jobView;
-(void)awakeFromNib;
-(void)setBannerView:(id)arg1 ;
-(id)bannerView;
-(id)thumbnailImageView;
-(void)setDefaults:(id)arg1 ;
@end

