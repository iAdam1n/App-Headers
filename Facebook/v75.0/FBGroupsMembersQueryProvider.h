/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsMembersQueryProviding.h>

@class NSString;

@interface FBGroupsMembersQueryProvider : NSObject <FBGroupsMembersQueryProviding> {

	NSString* _groupID;
	NSString* _viewerID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGroupID:(id)arg1 ;
-(id)initWithGroupIDAndViewerID:(id)arg1 viewerID:(id)arg2 ;
-(id)adminMembersQueryWithAdminType:(id)arg1 afterCursor:(id)arg2 count:(id)arg3 ;
-(id)membersQueryWithType:(long long)arg1 afterCursor:(id)arg2 count:(id)arg3 ;
-(id)searchMembersQueryWithTerm:(id)arg1 count:(id)arg2 ;
-(BOOL)canProvideMembersQueryWithType:(long long)arg1 ;
-(BOOL)canProvideSearchQuery;
@end

