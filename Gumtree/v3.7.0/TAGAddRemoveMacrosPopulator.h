/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/TAGAddRemoveSetPopulator.h>

@class NSDictionary;

@interface TAGAddRemoveMacrosPopulator : NSObject <TAGAddRemoveSetPopulator> {

	NSDictionary* _addMacros;
	NSDictionary* _removeMacros;

}

@property (nonatomic,retain) NSDictionary * addMacros;                 //@synthesize addMacros=_addMacros - In the implementation block
@property (nonatomic,retain) NSDictionary * removeMacros;              //@synthesize removeMacros=_removeMacros - In the implementation block
-(NSDictionary *)addMacros;
-(NSDictionary *)removeMacros;
-(void)setAddMacros:(NSDictionary *)arg1 ;
-(void)setRemoveMacros:(NSDictionary *)arg1 ;
-(void)rulePassed:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)initWithAddMacros:(id)arg1 removeMacros:(id)arg2 ;
@end

