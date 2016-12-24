/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPageCallToActionField : FBGraphQLInput {

	NSString* _fieldKey;
	NSString* _fieldValue;

}

@property (nonatomic,copy) NSString * fieldKey;                //@synthesize fieldKey=_fieldKey - In the implementation block
@property (nonatomic,copy) NSString * fieldValue;              //@synthesize fieldValue=_fieldValue - In the implementation block
-(void)setFieldKey:(NSString *)arg1 ;
-(NSString *)fieldKey;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)fieldValue;
-(void)setFieldValue:(NSString *)arg1 ;
@end
