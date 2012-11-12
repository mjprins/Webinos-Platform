/*******************************************************************************
 *  Code contributed to the webinos project
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *  
 *     http://www.apache.org/licenses/LICENSE-2.0
 *  
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * Copyright 2012 Torsec -Computer and network security group-
 * Politecnico di Torino
 * 
 ******************************************************************************/

#include "AuthzUseForPurpose.h"

AuthzUseForPurpose::AuthzUseForPurpose(TiXmlElement* authzuseforpurpose){

	// Purpose Tag
	TiXmlElement * child = (TiXmlElement*)authzuseforpurpose->FirstChild("Purpose");
	string tmp = child->GetText();
}

AuthzUseForPurpose::~AuthzUseForPurpose(){
}

