/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBContactSearchContactResult, FBContactSearchGroupResult, FBContactSearchPageResult, FBContactSearchSecureThreadResult, FBContactSearchAddressBookResult;

@interface FBContactSearchResult : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBContactSearchContactResult* _contactResult;
	FBContactSearchGroupResult* _groupResult;
	FBContactSearchPageResult* _pageResult;
	FBContactSearchSecureThreadResult* _secureThreadResult;
	FBContactSearchAddressBookResult* _addressBookResult;

}
+(id)contactResult:(id)arg1 ;
+(id)secureThreadResult:(id)arg1 ;
+(id)groupResult:(id)arg1 ;
+(id)addressBookResult:(id)arg1 ;
+(id)pageResult:(id)arg1 ;
-(void)matchContactResult:(/*^block*/id)arg1 groupResult:(/*^block*/id)arg2 pageResult:(/*^block*/id)arg3 secureThreadResult:(/*^block*/id)arg4 addressBookResult:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
