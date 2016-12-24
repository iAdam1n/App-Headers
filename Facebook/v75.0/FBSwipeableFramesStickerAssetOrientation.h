/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSwipeableFramesStickerAssetOrientation : FBValueObject <NSCopying> {

	unsigned long long _sizeDimension;
	double _assetSize;
	unsigned long long _horizontalAlignment;
	unsigned long long _verticalAlignment;
	double _horizontalMargin;
	double _verticalMargin;

}

@property (nonatomic,readonly) unsigned long long sizeDimension;                    //@synthesize sizeDimension=_sizeDimension - In the implementation block
@property (nonatomic,readonly) double assetSize;                                    //@synthesize assetSize=_assetSize - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalAlignment;              //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalAlignment;                //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,readonly) double horizontalMargin;                             //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) double verticalMargin;                               //@synthesize verticalMargin=_verticalMargin - In the implementation block
-(id)initWithSizeDimension:(unsigned long long)arg1 assetSize:(double)arg2 horizontalAlignment:(unsigned long long)arg3 verticalAlignment:(unsigned long long)arg4 horizontalMargin:(double)arg5 verticalMargin:(double)arg6 ;
-(unsigned long long)sizeDimension;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(double)verticalMargin;
-(double)assetSize;
-(double)horizontalMargin;
@end
