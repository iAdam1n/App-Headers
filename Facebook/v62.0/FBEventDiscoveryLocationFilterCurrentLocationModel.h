/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation;

@interface FBEventDiscoveryLocationFilterCurrentLocationModel : FBValueObject <NSCopying> {

	BOOL _isSelected;
	long long _selectedRadiusMiles;
	CLLocation* _viewerLocation;

}

@property (nonatomic,readonly) BOOL isSelected;                               //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) long long selectedRadiusMiles;                 //@synthesize selectedRadiusMiles=_selectedRadiusMiles - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * viewerLocation;              //@synthesize viewerLocation=_viewerLocation - In the implementation block
-(long long)selectedRadiusMiles;
-(CLLocation *)viewerLocation;
-(id)initWithIsSelected:(BOOL)arg1 selectedRadiusMiles:(long long)arg2 viewerLocation:(id)arg3 ;
-(BOOL)isSelected;
@end
