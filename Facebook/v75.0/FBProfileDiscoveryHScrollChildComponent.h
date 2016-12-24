/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FIGCardContentHScrollChildCompliant.h>

@class NSString, FBMemPerson, FBFeedToolbox;

@interface FBProfileDiscoveryHScrollChildComponent : CKCompositeComponent <FIGCardContentHScrollChildCompliant> {

	NSString* _bucketID;
	unsigned long long _index;
	FBMemPerson* _person;
	NSString* _referrerID;
	NSString* _referrerType;
	FBFeedToolbox* _toolbox;

}
+(id)newWithPerson:(id)arg1 bucketID:(id)arg2 index:(unsigned long long)arg3 referrerID:(id)arg4 referrerType:(id)arg5 toolbox:(id)arg6 ;
-(void)didTapChildComponent;
@end
