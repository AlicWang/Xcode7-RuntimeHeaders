//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CDMModel (CDMNavigableIdentification) <IDEDataModelSourceObject, IDEDMModelRootObject>
+ (id)orderedLocationKeys;
+ (id)keyPathsForValuesAffectingHierarchyTreeControllerChildren;
+ (id)keyPathsForValuesAffectingRootsOfEntityTree;
+ (id)keyPathsForValuesAffectingTreeControllerChildren;
+ (id)keyPathsForValuesAffectingStructuralChildren;
+ (id)keyPathsForValuesAffectingTopLevelObjects;
- (void)removeTopLevelObject:(id)arg1;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;
@property(readonly) NSImage *representativeIcon;
@property(readonly) id <IDEDMSourceObject> sourceObject;
@property(readonly) NSArray *hierarchyTreeControllerChildren;
- (id)treeControllerChildren;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@end