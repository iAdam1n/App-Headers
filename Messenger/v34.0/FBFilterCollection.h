/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FBFilterCollection : NSObject {

	NSArray* _filters;
	NSArray* _hiddenFilters;
	BOOL _compiled;
	RecursiveMutex _lock;

}

@property (nonatomic,copy,readonly) NSArray * filters;                     //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filtersWithLux; 
+(id)createFilterInstances:(id)arg1 ;
+(id)sharedInstance;
-(id)getFilterWithID:(long long)arg1 ;
-(void)compileAll:(id)arg1 ;
-(void)invalidateShaderCompiles;
-(NSArray *)filtersWithLux;
-(id)init;
-(NSArray *)filters;
@end

