/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface MNProfileImageView : UIView {

	NSMutableArray* _imageViews;
	NSArray* _images;
	id _profileImagesIdentifier;

}

@property (nonatomic,retain) id profileImagesIdentifier;                 //@synthesize profileImagesIdentifier=_profileImagesIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
-(void)_layoutOneImage;
-(void)_layoutTwoImages;
-(void)_layoutThreeImages;
-(double)_horizontalSeparatorLeft;
-(double)_verticalSeparatorTop;
-(void)_prepareImageViews:(unsigned long long)arg1 ;
-(id)profileImagesIdentifier;
-(void)setProfileImagesIdentifier:(id)arg1 ;
-(void)setProfileImages:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(NSMutableArray *)imageViews;
@end

