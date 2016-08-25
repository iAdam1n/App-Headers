/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <AngryBirdsRio/GADAdLoaderOptions.h>

@interface GADNativeAdImageAdLoaderOptions : GADAdLoaderOptions {

	BOOL _disableImageLoading;
	BOOL _shouldRequestMultipleImages;
	long long _preferredImageOrientation;

}

@property (assign,nonatomic) BOOL disableImageLoading;                         //@synthesize disableImageLoading=_disableImageLoading - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestMultipleImages;                 //@synthesize shouldRequestMultipleImages=_shouldRequestMultipleImages - In the implementation block
@property (assign,nonatomic) long long preferredImageOrientation;              //@synthesize preferredImageOrientation=_preferredImageOrientation - In the implementation block
-(BOOL)disableImageLoading;
-(void)setDisableImageLoading:(BOOL)arg1 ;
-(BOOL)shouldRequestMultipleImages;
-(void)setShouldRequestMultipleImages:(BOOL)arg1 ;
-(long long)preferredImageOrientation;
-(void)setPreferredImageOrientation:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)requestParameters;
@end

