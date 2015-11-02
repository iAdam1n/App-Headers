/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@interface WACameraFaceObject : NSObject {

	long long _faceID;
	double _beginTime;
	double _rollAngle;
	CGRect _bounds;
	CGRect _rawBounds;

}

@property (nonatomic,readonly) long long faceID;              //@synthesize faceID=_faceID - In the implementation block
@property (nonatomic,readonly) double beginTime;              //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) CGRect bounds;                   //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double rollAngle;                //@synthesize rollAngle=_rollAngle - In the implementation block
@property (assign,nonatomic) CGRect rawBounds;                //@synthesize rawBounds=_rawBounds - In the implementation block
@property (nonatomic,readonly) double area; 
-(id)initWithFaceID:(long long)arg1 beginTime:(double)arg2 ;
-(CGRect)rawBounds;
-(void)setRawBounds:(CGRect)arg1 ;
-(void)setRollAngle:(double)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(double)beginTime;
-(long long)faceID;
-(double)rollAngle;
-(double)area;
@end
