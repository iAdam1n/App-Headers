/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSNumber;

@interface FBMessengerAppIconParams : FBGraphQLInput {

	NSArray* _typeAttribute;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _scale;

}

@property (nonatomic,copy) NSArray * typeAttribute;              //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,copy) NSNumber * width;                     //@synthesize width=_width - In the implementation block
@property (nonatomic,copy) NSNumber * height;                    //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSNumber * scale;                     //@synthesize scale=_scale - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setScale:(NSNumber *)arg1 ;
-(NSNumber *)scale;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(void)setTypeAttribute:(NSArray *)arg1 ;
-(NSArray *)typeAttribute;
@end
