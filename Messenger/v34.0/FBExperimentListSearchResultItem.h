/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface FBExperimentListSearchResultItem : NSObject {

	NSString* _searchResultName;
	NSIndexPath* _atIndexPath;

}

@property (nonatomic,copy,readonly) NSString * searchResultName;              //@synthesize searchResultName=_searchResultName - In the implementation block
@property (nonatomic,readonly) NSIndexPath * atIndexPath;                     //@synthesize atIndexPath=_atIndexPath - In the implementation block
+(id)createSearchResultItemName:(id)arg1 indexPath:(id)arg2 ;
-(NSString *)searchResultName;
-(id)initWithSearchResultName:(id)arg1 indexPath:(id)arg2 ;
-(NSIndexPath *)atIndexPath;
-(id)init;
@end
