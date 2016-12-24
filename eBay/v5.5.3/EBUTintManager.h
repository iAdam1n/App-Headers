/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <eBay/eBay-Structs.h>
@interface EBUTintManager : NSObject {

	long long _xSampleSize;
	long long _ySampleSize;

}

@property (assign,nonatomic) long long xSampleSize;              //@synthesize xSampleSize=_xSampleSize - In the implementation block
@property (assign,nonatomic) long long ySampleSize;              //@synthesize ySampleSize=_ySampleSize - In the implementation block
-(BOOL)tintIsWhiteForView:(id)arg1 backgroundView:(id)arg2 ;
-(void)setXSampleSize:(long long)arg1 ;
-(void)setYSampleSize:(long long)arg1 ;
-(long long)xSampleSize;
-(long long)ySampleSize;
-(double)greyValueOfPoint:(CGPoint)arg1 backgroundView:(id)arg2 ;
-(id)init;
-(void)commonInit;
@end
