/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBPromptData : FBGraphQLInput {

	NSString* _promptId;
	NSString* _promptType;
	NSString* _promptTrackingString;

}

@property (nonatomic,copy) NSString * promptId;                          //@synthesize promptId=_promptId - In the implementation block
@property (nonatomic,copy) NSString * promptType;                        //@synthesize promptType=_promptType - In the implementation block
@property (nonatomic,copy) NSString * promptTrackingString;              //@synthesize promptTrackingString=_promptTrackingString - In the implementation block
-(NSString *)promptId;
-(NSString *)promptType;
-(NSString *)promptTrackingString;
-(void)setPromptType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setPromptId:(NSString *)arg1 ;
-(void)setPromptTrackingString:(NSString *)arg1 ;
@end
