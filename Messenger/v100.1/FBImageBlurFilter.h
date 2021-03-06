/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBImageFilter.h>

@class UIColor, NSString;

@interface FBImageBlurFilter : NSObject <FBImageFilter> {

	double _blurRadiusRatio;
	double _saturationDelta;
	UIColor* _tintColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * filterID; 
-(id)initWithBlurRadiusRatio:(double)arg1 saturationDelta:(double)arg2 tintColor:(id)arg3 ;
-(id)filterImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)filterID;
@end

