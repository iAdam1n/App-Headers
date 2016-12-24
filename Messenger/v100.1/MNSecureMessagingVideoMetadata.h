/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNSecureMessagingVideoMetadata : NSObject <TBase, NSCoding> {

	int __width;
	int __height;
	int __duration_ms;
	int __rotation;
	BOOL __width_isset;
	BOOL __height_isset;
	BOOL __duration_ms_isset;
	BOOL __rotation_isset;

}

@property (assign,setter=setWidth:,getter=width,nonatomic) int width; 
@property (assign,setter=setHeight:,getter=height,nonatomic) int height; 
@property (assign,setter=setDuration_ms:,getter=duration_ms,nonatomic) int duration_ms; 
@property (assign,setter=setRotation:,getter=rotation,nonatomic) int rotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)widthIsSet;
-(void)unsetWidth;
-(BOOL)heightIsSet;
-(void)unsetHeight;
-(void)setDuration_ms:(int)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 duration_ms:(int)arg3 rotation:(int)arg4 ;
-(int)duration_ms;
-(BOOL)duration_msIsSet;
-(void)unsetDuration_ms;
-(BOOL)rotationIsSet;
-(void)unsetRotation;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)width;
-(int)height;
-(void)setRotation:(int)arg1 ;
-(int)rotation;
-(void)setWidth:(int)arg1 ;
-(void)validate;
-(void)setHeight:(int)arg1 ;
-(void)write:(id)arg1 ;
@end
