/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUIConfigBuilder.h>

@class NSString, UIColor;

@interface FBBubbleViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	unsigned long long _arrowPosition;
	NSString* _text;
	double _arrowApexX;
	double _arrowApexY;
	UIColor* _fillColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setArrowPosition:(unsigned long long)arg1 ;
-(id)setArrowApexX:(double)arg1 ;
-(id)setArrowApexY:(double)arg1 ;
-(id)_init;
-(id)setText:(id)arg1 ;
-(id)setFillColor:(id)arg1 ;
-(id)build;
@end
