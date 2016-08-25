/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray;

@interface JMActionMenuHostPreference : NSObject <NSCoding> {

	NSString* _hostIdent;
	NSMutableArray* _nodePreferences;

}

@property (retain) NSString * hostIdent;                          //@synthesize hostIdent=_hostIdent - In the implementation block
@property (retain) NSMutableArray * nodePreferences;              //@synthesize nodePreferences=_nodePreferences - In the implementation block
+(id)loadPreferenceDataForHost:(id)arg1 ;
+(id)preferencesForHost:(id)arg1 ;
+(id)relatedHostsToHost:(id)arg1 thatAlsoContainNodeIdent:(id)arg2 ;
+(id)orderedNodesToDisplayForHost:(id)arg1 includeHiddenNodes:(BOOL)arg2 ;
+(void)host:(id)arg1 prefersPosition:(unsigned long long)arg2 forNodeIdent:(id)arg3 ;
+(void)host:(id)arg1 setGlobalUserInfo:(id)arg2 forNodeIdent:(id)arg3 ;
+(void)host:(id)arg1 setVisibilityHidden:(BOOL)arg2 forNodeIdent:(id)arg3 ;
-(void)setNodePreferences:(NSMutableArray *)arg1 ;
-(void)setHostIdent:(NSString *)arg1 ;
-(NSMutableArray *)nodePreferences;
-(NSString *)hostIdent;
-(void)sanitiseConflictingPositionPreferences;
-(id)initWithHostIdentifier:(id)arg1 ;
-(void)mergePotentialChangesOfDefaultNodes:(id)arg1 ;
-(id)preferenceForNodeIdent:(id)arg1 ;
-(void)bumpUpNodePreferencesBeforeOrEqualToPosition:(unsigned long long)arg1 ;
-(void)bumpDownNodePreferencesFromPosition:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)log;
-(void)saveChanges;
@end

