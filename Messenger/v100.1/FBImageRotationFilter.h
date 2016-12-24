/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBOpenGLFilter.h>

@class FBImageFilter;

@interface FBImageRotationFilter : FBOpenGLFilter {

	FBImageFilter* _rotateFilter;
	long long _rotationAction;

}

@property (assign,nonatomic) long long rotationAction;              //@synthesize rotationAction=_rotationAction - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(void)setRotationAction:(long long)arg1 ;
-(long long)rotationAction;
-(id)init;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
@end
