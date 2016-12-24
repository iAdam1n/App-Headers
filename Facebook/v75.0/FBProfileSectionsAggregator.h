/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableArray;

@interface FBProfileSectionsAggregator : NSObject {

	unsigned long long _sectionStartIndex;
	NSMutableArray* _sectionControllers;

}
-(void)addSectionController:(id)arg1 sectionChanges:(Sections*)arg2 ;
-(id)sectionControllerForIdentifier:(id)arg1 ;
-(id)initWithSectionStartIndex:(unsigned long long)arg1 ;
-(id)sectionControllers;
-(void)removeSectionControllerWithIdentifier:(id)arg1 sectionChanges:(Sections*)arg2 ;
-(void)removeAllSectionControllersWithSectionChanges:(Sections*)arg1 ;
-(id)init;
@end
