/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Crystal/Crystal-Structs.h>
@class FABIcon, NSDictionary;

@interface FABAppIconUtility : NSObject {

	FABIcon* _applicationIcon;

}

@property (nonatomic,retain) FABIcon * applicationIcon;                       //@synthesize applicationIcon=_applicationIcon - In the implementation block
@property (nonatomic,readonly) NSDictionary * appInfoDictionary; 
+(BOOL)isIconImageFileNameExtensionPresentInName:(id)arg1 ;
+(void)addIconNameWithModifier:(id)arg1 forIconWithName:(id)arg2 toSetOfIconNames:(id)arg3 ;
+(id)iconNameSetWithAlternateNamesAddedToIconNameSet:(id)arg1 ;
+(CGSize)sizeForImage:(id)arg1 ;
-(id)fetchApplicationIcon;
-(id)iconRootPath;
-(NSDictionary *)appInfoDictionary;
-(id)largestIconInIconNames:(id)arg1 prerendered:(BOOL)arg2 ;
-(id)iconFromIOS7StyleCFBundleIconsInFieldWithKey:(id)arg1 ;
-(id)iconFromCFBundleIconFiles;
-(id)iconFromCFBundleIconFile;
-(id)iconByFallingBackOnDefaultIconNamingConvention;
-(void)setApplicationIcon:(FABIcon *)arg1 ;
-(FABIcon *)applicationIcon;
@end
