/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber;

@interface FBProfileIntroCardMediaCollageLayout : FBGraphQLInput {

	NSNumber* _x;
	NSNumber* _y;
	NSNumber* _width;
	NSNumber* _height;

}

@property (x,nonatomic,copy) NSNumber * x;                 //@synthesize x=_x - In the implementation block
@property (y,nonatomic,copy) NSNumber * y;                 //@synthesize y=_y - In the implementation block
@property (nonatomic,copy) NSNumber * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,copy) NSNumber * height;              //@synthesize height=_height - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)x;
-(void)setX:(NSNumber *)arg1 ;
-(NSNumber *)y;
-(void)setY:(NSNumber *)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
@end
