/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBActivityIcon : FBValueObject <NSCopying, NSCoding> {

	NSString* _largeIconUri;
	NSString* _smallIconUri;
	NSString* _graphqlId;
	NSString* _legacyApiId;

}

@property (nonatomic,copy,readonly) NSString * largeIconUri;              //@synthesize largeIconUri=_largeIconUri - In the implementation block
@property (nonatomic,copy,readonly) NSString * smallIconUri;              //@synthesize smallIconUri=_smallIconUri - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphqlId;                 //@synthesize graphqlId=_graphqlId - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyApiId;               //@synthesize legacyApiId=_legacyApiId - In the implementation block
-(NSString *)legacyApiId;
-(NSString *)largeIconUri;
-(NSString *)graphqlId;
-(id)initWithLargeIconUri:(id)arg1 smallIconUri:(id)arg2 graphqlId:(id)arg3 legacyApiId:(id)arg4 ;
-(NSString *)smallIconUri;
@end
