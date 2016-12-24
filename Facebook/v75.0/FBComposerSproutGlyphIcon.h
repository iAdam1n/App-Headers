/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBComposerSproutGlyphIcon : FBValueObject <NSCopying> {

	UIColor* _glyphBackgroundColor;
	UIColor* _glyphColor;
	unsigned long long _glyphName;
	UIEdgeInsets _glyphInsets;

}

@property (nonatomic,copy,readonly) UIColor * glyphBackgroundColor;              //@synthesize glyphBackgroundColor=_glyphBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * glyphColor;                        //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;                     //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets glyphInsets;                         //@synthesize glyphInsets=_glyphInsets - In the implementation block
-(id)initWithGlyphBackgroundColor:(id)arg1 glyphColor:(id)arg2 glyphName:(unsigned long long)arg3 glyphInsets:(UIEdgeInsets)arg4 ;
-(UIEdgeInsets)glyphInsets;
-(unsigned long long)glyphName;
-(UIColor *)glyphColor;
-(UIColor *)glyphBackgroundColor;
@end
