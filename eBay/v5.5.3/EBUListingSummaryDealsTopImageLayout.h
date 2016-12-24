/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUListingSummaryLayout.h>

@interface EBUListingSummaryDealsTopImageLayout : EBUListingSummaryLayout {

	double _vBorderPad;
	double _hBorderPad;
	double _imageBottomPad;
	double _imageTitlePad;
	double _imagePricePad;
	double _interlabelPad;

}

@property (assign,nonatomic) double vBorderPad;                  //@synthesize vBorderPad=_vBorderPad - In the implementation block
@property (assign,nonatomic) double hBorderPad;                  //@synthesize hBorderPad=_hBorderPad - In the implementation block
@property (assign,nonatomic) double imageBottomPad;              //@synthesize imageBottomPad=_imageBottomPad - In the implementation block
@property (assign,nonatomic) double imageTitlePad;               //@synthesize imageTitlePad=_imageTitlePad - In the implementation block
@property (assign,nonatomic) double imagePricePad;               //@synthesize imagePricePad=_imagePricePad - In the implementation block
@property (assign,nonatomic) double interlabelPad;               //@synthesize interlabelPad=_interlabelPad - In the implementation block
-(id)createTheme;
-(double)pictureViewWidth;
-(double)pictureViewHeight;
-(void)updateLabelAttributes:(id)arg1 withSelector:(id)arg2 ;
-(id)requiredViews;
-(void)constrainViews;
-(void)constrainLabels;
-(double)vBorderPad;
-(void)setVBorderPad:(double)arg1 ;
-(double)hBorderPad;
-(void)setHBorderPad:(double)arg1 ;
-(double)imageBottomPad;
-(void)setImageBottomPad:(double)arg1 ;
-(double)imageTitlePad;
-(void)setImageTitlePad:(double)arg1 ;
-(double)imagePricePad;
-(void)setImagePricePad:(double)arg1 ;
-(double)interlabelPad;
-(void)setInterlabelPad:(double)arg1 ;
-(void)updateLabels;
-(id)metrics;
-(void)createConstraints;
@end
