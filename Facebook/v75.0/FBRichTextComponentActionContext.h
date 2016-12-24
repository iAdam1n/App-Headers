/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSTextCheckingResult, UIView;

@interface FBRichTextComponentActionContext : NSObject {

	NSTextCheckingResult* _result;
	UIView* _view;
	CGPoint _location;

}

@property (nonatomic,readonly) NSTextCheckingResult * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) UIView * view;                              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint location;                           //@synthesize location=_location - In the implementation block
-(id)initWithResult:(id)arg1 view:(id)arg2 location:(CGPoint)arg3 ;
-(UIView *)view;
-(CGPoint)location;
-(NSTextCheckingResult *)result;
@end
