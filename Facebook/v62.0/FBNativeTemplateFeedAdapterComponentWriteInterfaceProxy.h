/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSectionedDataSourceWriting.h>

@class FBNativeTemplateFeedAdapterComponent, NSString;

@interface FBNativeTemplateFeedAdapterComponentWriteInterfaceProxy : NSObject <FBSectionedDataSourceWriting> {

	FBNativeTemplateFeedAdapterComponent* _component;

}

@property (assign,nonatomic,__weak) FBNativeTemplateFeedAdapterComponent * component;              //@synthesize component=_component - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(void)enqueueReload;
-(void)setComponent:(FBNativeTemplateFeedAdapterComponent *)arg1 ;
-(FBNativeTemplateFeedAdapterComponent *)component;
@end
