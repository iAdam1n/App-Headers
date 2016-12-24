/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
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
+(id)secureThreadResult:(id)arg1 ;
+(id)contactResult:(id)arg1 ;
+(id)groupResult:(id)arg1 ;
+(id)addressBookResult:(id)arg1 ;
+(id)pageResult:(id)arg1 ;
-(void)matchContactResult:(/*^block*/id)arg1 groupResult:(/*^block*/id)arg2 pageResult:(/*^block*/id)arg3 secureThreadResult:(/*^block*/id)arg4 addressBookResult:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
