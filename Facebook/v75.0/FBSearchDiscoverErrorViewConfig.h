/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBSearchDiscoverErrorViewConfig : FBValueObject <NSCopying> {

	UIColor* _backgroundColor;
	UIColor* _titleLabelBackgroundColor;
	UIColor* _subtitleLabelBackgroundColor;
	UIColor* _titleLabelTextColor;
	UIColor* _subtitleLabelTextColor;

}

@property (nonatomic,copy,readonly) UIColor * backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * titleLabelBackgroundColor;                 //@synthesize titleLabelBackgroundColor=_titleLabelBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * subtitleLabelBackgroundColor;              //@synthesize subtitleLabelBackgroundColor=_subtitleLabelBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * titleLabelTextColor;                       //@synthesize titleLabelTextColor=_titleLabelTextColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * subtitleLabelTextColor;                    //@synthesize subtitleLabelTextColor=_subtitleLabelTextColor - In the implementation block
+(id)searchNullStateConfig;
+(id)videoNullStateConfig;
+(id)configFromTypeaheadStyle:(unsigned long long)arg1 ;
-(id)initWithBackgroundColor:(id)arg1 titleLabelBackgroundColor:(id)arg2 subtitleLabelBackgroundColor:(id)arg3 titleLabelTextColor:(id)arg4 subtitleLabelTextColor:(id)arg5 ;
-(UIColor *)titleLabelBackgroundColor;
-(UIColor *)subtitleLabelBackgroundColor;
-(UIColor *)titleLabelTextColor;
-(UIColor *)subtitleLabelTextColor;
-(UIColor *)backgroundColor;
@end
