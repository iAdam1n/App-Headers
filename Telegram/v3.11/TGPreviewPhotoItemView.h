/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMenuSheetItemView.h>

@class TGImageView, TGImageMediaAttachment, NSURL;

@interface TGPreviewPhotoItemView : TGMenuSheetItemView {

	TGImageView* _imageView;
	CGSize _dimensions;
	TGImageMediaAttachment* _attachment;
	NSURL* _url;
	NSURL* _thumbUrl;
	CGSize _imageSize;

}
-(double)preferredHeightForWidth:(double)arg1 screenHeight:(double)arg2 ;
-(void)menuView:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(id)initWithImageAttachment:(id)arg1 ;
-(id)initWithThumbURL:(id)arg1 url:(id)arg2 size:(CGSize)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
