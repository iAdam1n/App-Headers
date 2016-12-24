/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPBaseEmoticonList.h>

@class NSObject, SKPInBundleEmoticonListInternal;

@interface SKPBuiltInEmoticonList : SKPBaseEmoticonList {

	NSObject* _internalListMutex;
	SKPInBundleEmoticonListInternal* _internalList;

}

@property (nonatomic,retain) SKPInBundleEmoticonListInternal * internalList;              //@synthesize internalList=_internalList - In the implementation block
-(id)treeNodeChildObjectValueForKey:(id)arg1 ;
-(id)allInBundleEmoticons;
-(id)smileyEmoticonWithIdentifier:(id)arg1 ;
-(unsigned long long)zIndexForEmoticonWithIdentifier:(id)arg1 ;
-(SKPInBundleEmoticonListInternal *)internalList;
-(BOOL)hasListLoaded;
-(void)setInternalList:(SKPInBundleEmoticonListInternal *)arg1 ;
-(id)init;
@end
