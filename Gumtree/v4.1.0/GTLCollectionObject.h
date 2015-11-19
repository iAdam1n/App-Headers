/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GTLObject.h>
#import <Gumtree/GTLCollectionProtocol.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSDictionary;

@interface GTLCollectionObject : GTLObject <GTLCollectionProtocol, NSFastEnumeration> {

	NSDictionary* identifierMap_;

}

@property (retain) NSArray * items; 
-(void)resetIdentifierMap;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
@end
