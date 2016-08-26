/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerGroupCommerceLocalMarketInfo : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	BOOL _shouldPostToMarketplace;
	NSString* _marketplaceID;
	NSString* _originatedGroupID;

}

@property (nonatomic,copy,readonly) NSString * marketplaceID;                  //@synthesize marketplaceID=_marketplaceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatedGroupID;              //@synthesize originatedGroupID=_originatedGroupID - In the implementation block
@property (nonatomic,readonly) BOOL shouldPostToMarketplace;                   //@synthesize shouldPostToMarketplace=_shouldPostToMarketplace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldPostToMarketplace;
-(id)initWithMarketplaceID:(id)arg1 originatedGroupID:(id)arg2 shouldPostToMarketplace:(BOOL)arg3 ;
-(NSString *)marketplaceID;
-(NSString *)originatedGroupID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shallowCopy;
@end
