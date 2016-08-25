/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMOutlineCell.h>

@class ThumbOverlay, JMViewOverlay, ImgurUploadRecord;

@interface ImgurUploadCell : JMOutlineCell {

	ThumbOverlay* _thumbOverlay;
	JMViewOverlay* _titleOverlay;
	JMViewOverlay* _gearButtonOverlay;

}

@property (readonly) ImgurUploadRecord * uploadRecord; 
@property (retain) ThumbOverlay * thumbOverlay;                     //@synthesize thumbOverlay=_thumbOverlay - In the implementation block
@property (retain) JMViewOverlay * titleOverlay;                    //@synthesize titleOverlay=_titleOverlay - In the implementation block
@property (retain) JMViewOverlay * gearButtonOverlay;               //@synthesize gearButtonOverlay=_gearButtonOverlay - In the implementation block
+(double)heightForNode:(id)arg1 tableView:(id)arg2 ;
-(void)createSubviews;
-(void)setTitleOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)titleOverlay;
-(void)decorateCellBackground;
-(void)updateWithNode:(id)arg1 ;
-(ThumbOverlay *)thumbOverlay;
-(void)setThumbOverlay:(ThumbOverlay *)arg1 ;
-(ImgurUploadRecord *)uploadRecord;
-(void)didTapGearIcon;
-(void)setGearButtonOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)gearButtonOverlay;
@end

