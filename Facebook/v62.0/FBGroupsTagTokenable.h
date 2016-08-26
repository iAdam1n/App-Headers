/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEntityTokenable.h>

@class NSString;

@interface FBGroupsTagTokenable : NSObject <FBEntityTokenable> {

	NSString* _tokenText;
	NSString* _graphQLID;

}

@property (nonatomic,copy,readonly) NSString * tokenText;              //@synthesize tokenText=_tokenText - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLID;              //@synthesize graphQLID=_graphQLID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)graphQLID;
-(NSString *)tokenText;
-(id)tokenImage;
-(id)tokenImageSelected;
-(id)initWithTokenText:(id)arg1 withGraphQLID:(id)arg2 ;
@end
